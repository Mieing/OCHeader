@class NSString, NSMutableDictionary, NSArray, NLEModel_OC;
@protocol AEKMegaEditor, AWEEditKit;

@interface ACCRecordEffectCaptionEditor : NSObject

@property (copy, nonatomic) NSString *draftFolder;
@property (retain, nonatomic) NLEModel_OC *nleModel;
@property (retain, nonatomic) id<AEKMegaEditor> megaEditor;
@property (retain, nonatomic) id<AWEEditKit> editKit;
@property (retain, nonatomic) NSMutableDictionary *slotJsonToUUIDDict;
@property (retain, nonatomic) NSMutableDictionary *uuidToSlotJsonDict;
@property (readonly, nonatomic) NSArray *slotJsonList;
@property (readonly, copy, nonatomic) NSArray *captions;

+ (void)setupCaptionWithEditKit:(id)a0 captions:(id)a1 templateEffectModel:(id)a2 fontEffectModel:(id)a3 style:(long long)a4 textColor:(id)a5;

- (id)initWithDraftFolder:(id)a0;
- (id)generateNLEModelJsonString:(id)a0 captions:(id)a1 templateEffectModel:(id)a2 fontEffectModel:(id)a3;
- (void)setAnchor:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setVisible:(BOOL)a0;

@end
