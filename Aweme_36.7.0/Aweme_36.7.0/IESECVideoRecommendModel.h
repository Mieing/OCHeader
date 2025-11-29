@class NSString, NSNumber, IESECURLModel;

@interface IESECVideoRecommendModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *videoDuration;
@property (retain, nonatomic) IESECURLModel *coverImage;
@property (retain, nonatomic) IESECURLModel *videoURL;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *linkWithProduct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
