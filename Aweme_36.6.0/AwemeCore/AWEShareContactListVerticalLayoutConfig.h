@class NSSet;

@interface AWEShareContactListVerticalLayoutConfig : NSObject

@property (retain, nonatomic) NSSet *supportScenes;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long rowCount;
@property (nonatomic) long long columnCount;
@property (nonatomic) BOOL supportDragClose;

+ (id)sharedConfig;

- (BOOL)isSupportScene:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
