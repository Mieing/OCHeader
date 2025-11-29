@class NSString;

@interface IESLiveCommonTask : NSObject

@property (nonatomic) double prepareTime;
@property (retain, nonatomic) IESLiveCommonTask *next;
@property (retain, nonatomic) IESLiveCommonTask *prev;
@property (nonatomic) long long favor;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long scope;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL hasExpired;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) double runTime;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long taskType;
@property (nonatomic) long long level;
@property (nonatomic) long long option;
@property unsigned long long state;
@property (nonatomic) BOOL enableControl;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
