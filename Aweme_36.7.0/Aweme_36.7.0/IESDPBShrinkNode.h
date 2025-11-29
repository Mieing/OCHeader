@class NSArray, NSDictionary, NSString;

@interface IESDPBShrinkNode : NSObject

@property (copy, nonatomic) NSArray *keepArray;
@property (copy, nonatomic) NSDictionary *subShrinks;
@property (copy, nonatomic) NSString *configString;
@property (nonatomic) long long length;
@property (retain, nonatomic) IESDPBShrinkNode *mapValuesNode;

- (void).cxx_destruct;
- (id)init;

@end
