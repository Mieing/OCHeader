@class NSString;

@interface AWEBatManEntranceInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *buttonColor;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *stickerInfoURL;
@property (copy, nonatomic) NSString *stickerTitle;
@property (nonatomic) long long showStickerTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
