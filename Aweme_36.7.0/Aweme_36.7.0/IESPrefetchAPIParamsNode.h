@class NSString;

@interface IESPrefetchAPIParamsNode : NSObject

@property (copy, nonatomic) NSString *paramName;
@property (copy, nonatomic) id valueFrom;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long dataType;

- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
