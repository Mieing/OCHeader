@class NSString;

@interface AWEDLMStage : NSObject <NSCoding>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) double timeStamp;
@property (nonatomic) double costTime;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
