@class NSString;

@interface XPlayBusinessTaskInfo : NSObject <XPlayBusinessTaskInfoProtocol>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) unsigned long long order;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskInfoWithDict:(id)a0;

- (void).cxx_destruct;

@end
