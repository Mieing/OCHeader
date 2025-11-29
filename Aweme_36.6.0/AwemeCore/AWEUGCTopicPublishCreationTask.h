@class NSString, AWEAwemeModel;

@interface AWEUGCTopicPublishCreationTask : NSObject <AWESearchPublishCreationTaskProtocol>

@property (retain, nonatomic) NSString *creationId;
@property (nonatomic) long long publishResult;
@property (nonatomic) long long currentBarType;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) long long publishTaskStatus;
@property (copy, nonatomic) NSString *shootWay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)barType;
- (void).cxx_destruct;

@end
