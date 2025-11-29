@class NSString, NSNumber;

@interface IESECMallDeepFeedProductCommentInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *link;
@property (retain, nonatomic) NSNumber *commentCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
