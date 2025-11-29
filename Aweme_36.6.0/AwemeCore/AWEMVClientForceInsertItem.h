@class AWEAwemeModel;

@interface AWEMVClientForceInsertItem : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) unsigned long long cardType;
@property (nonatomic) unsigned long long method;
@property (nonatomic) unsigned long long position;
@property (nonatomic) unsigned long long customSpecificPosition;
@property (nonatomic) unsigned long long fallBackStrategy;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
