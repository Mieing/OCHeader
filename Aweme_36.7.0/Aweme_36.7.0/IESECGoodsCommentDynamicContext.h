@class NSString, NSDictionary;

@interface IESECGoodsCommentDynamicContext : NSObject

@property (nonatomic) BOOL isImpressionTag;
@property (copy, nonatomic) NSString *generalID;
@property (copy, nonatomic) NSString *commentEntrance;
@property (copy, nonatomic) NSString *fromKOLID;
@property (copy, nonatomic) NSString *KOLID;
@property (nonatomic) long long dataType;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
