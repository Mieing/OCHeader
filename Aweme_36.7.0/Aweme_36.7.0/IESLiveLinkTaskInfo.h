@class NSString, NSArray;

@interface IESLiveLinkTaskInfo : NSObject <IESLiveLinkTaskInfo>

@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) long long mode;
@property (nonatomic) long long qos;
@property (retain, nonatomic) NSArray *dependency;
@property (nonatomic) double overTime;
@property (nonatomic) long long insertStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
