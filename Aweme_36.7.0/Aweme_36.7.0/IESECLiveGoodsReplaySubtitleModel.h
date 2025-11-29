@class NSString, NSNumber;

@interface IESECLiveGoodsReplaySubtitleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *format;
@property (retain, nonatomic) NSNumber *ID;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *languageID;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *urlExpire;
@property (retain, nonatomic) NSNumber *videoSubtitleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createSubtitleDictFromModels:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
