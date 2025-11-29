@class NSString, NSDictionary;

@interface OVCLTPropertyResolvingParam : NSObject

@property (readonly, nonatomic) unsigned long long lowerThirdProperty;
@property (readonly, nonatomic) NSString *lowerThirdID;
@property (readonly, nonatomic) NSString *segmentID;
@property (readonly, nonatomic) int layerID;
@property (readonly, nonatomic) NSString *textTemplate;
@property (readonly, nonatomic) NSDictionary *context;

- (id)initWithLowerThirdProperty:(unsigned long long)a0 LowerThirdID:(id)a1 segmentID:(id)a2 layerID:(int)a3 textTemplate:(id)a4 context:(id)a5;
- (void).cxx_destruct;

@end
