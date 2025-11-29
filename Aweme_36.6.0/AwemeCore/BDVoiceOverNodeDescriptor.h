@class NSString;

@interface BDVoiceOverNodeDescriptor : NSObject

@property (copy, nonatomic) NSString *classType;
@property (copy, nonatomic) NSString *propertyName;
@property (copy, nonatomic) NSString *viewIndex;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *positionV;
@property (copy, nonatomic) NSString *positionH;
@property (copy, nonatomic) NSString *visible;

+ (id)descriptorWithString:(id)a0;

- (void)addOptionWithString:(id)a0;
- (void).cxx_destruct;

@end
