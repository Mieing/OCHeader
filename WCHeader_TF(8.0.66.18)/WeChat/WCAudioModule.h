@class NSString, NSArray, NSMutableDictionary;
@protocol WCAudioModuleDelegate;

@interface WCAudioModule : NSObject

@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasListenerLastTime;
@property (nonatomic) unsigned char priority;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSArray *mixList;
@property (weak, nonatomic) id<WCAudioModuleDelegate> listener;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (retain, nonatomic) NSString *conflictWording;

+ (unsigned char)getPriorityWithScene:(int)a0;
+ (id)getConflictWordingWithScene:(int)a0;

- (id)initWithScene:(int)a0 groupName:(id)a1 identifier:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
