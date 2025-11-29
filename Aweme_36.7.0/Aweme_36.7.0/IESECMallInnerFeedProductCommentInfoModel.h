@class NSString, NSNumber;

@interface IESECMallInnerFeedProductCommentInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSNumber *commentCount;
@property (nonatomic) BOOL hasShowAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
