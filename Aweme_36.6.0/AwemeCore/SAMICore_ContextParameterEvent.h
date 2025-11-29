@class NSString;

@interface SAMICore_ContextParameterEvent : NSObject

@property (nonatomic) int portIndex;
@property (nonatomic) int parameterIndex;
@property (nonatomic) float normalizedValue;
@property (nonatomic) float plainValue;
@property (retain, nonatomic) NSString *processorName;

@end
