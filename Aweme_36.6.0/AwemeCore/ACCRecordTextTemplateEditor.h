@class NSString, NLEModel_OC, NLETrackSlot_OC;
@protocol AEKBaseTextStickerOperator;

@interface ACCRecordTextTemplateEditor : NSObject

@property (copy, nonatomic) NSString *draftFolder;
@property (retain, nonatomic) NLEModel_OC *nleModel;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) id<AEKBaseTextStickerOperator> textOperator;
@property (readonly, copy, nonatomic) NSString *slotJson;

- (void).cxx_destruct;

@end
