@class NSString, NSDictionary;

@interface IESIMJobManagerEvent : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *ext;
@property (nonatomic) double fireTimestamp;
@property (nonatomic) BOOL fireOnMainQueue;
@property (nonatomic) unsigned int count;
@property (copy, nonatomic) NSDictionary *env;
@property (readonly, nonatomic) NSString *uniqueName;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
