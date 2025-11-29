@class NSString;

@interface AWEPadPolymericChannelAlbum : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *cover;
@property (nonatomic) double ratingScore;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *jumpUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
