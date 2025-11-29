@protocol PTYSettingProtocol;

@interface PTYSettingsMgr : NSObject

@property (retain, nonatomic) id<PTYSettingProtocol> impl;

+ (void)updateMap:(id)a0;
+ (void)setupWithImpl:(id)a0;
+ (id)getTemplatesMap;
+ (id)getNetDataCheckerMap;
+ (id)shared;
+ (id)getMap;

- (void).cxx_destruct;
- (id)init;

@end
