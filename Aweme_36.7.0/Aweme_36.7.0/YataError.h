@class NSString, NSDictionary;

@interface YataError : NSObject

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *trigger;
@property (copy, nonatomic) NSString *originDetail;
@property (copy, nonatomic) NSString *originTrigger;
@property (copy, nonatomic) NSString *nodeName;
@property (retain, nonatomic) NSDictionary *extraParams;

+ (id)errorWithCode:(unsigned long long)a0 detail:(id)a1 trigger:(id)a2 nodeName:(id)a3 extraParams:(id)a4;

- (void).cxx_destruct;

@end
