@class IESLiveInteractionCropData, NSString, NSDictionary, HTSInteractionStreamAppData, NSNumber;

@interface IESLiveHeartBeatSEIParserResult : NSObject <IESLiveSEIParserResult>

@property (retain, nonatomic) NSDictionary *content;
@property (retain, nonatomic) NSNumber *ts;
@property (copy, nonatomic) NSString *sign;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveInteractionCropData *cropData;
@property (retain, nonatomic) NSDictionary *metaSEI;
@property (nonatomic) unsigned long long seiType;
@property (nonatomic) unsigned long long seiMode;
@property (nonatomic) BOOL immidiately;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
