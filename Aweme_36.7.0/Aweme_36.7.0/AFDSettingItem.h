@class NSAttributedString, NSArray, NSString, NSNumber, NSObject;
@protocol AWEIMPinYinSearchProtocol, OS_dispatch_semaphore;

@interface AFDSettingItem : NSObject <NSCopying, AFDSettingItemProtocol>

@property (retain, nonatomic) NSNumber *isRootValue;
@property (copy, nonatomic) NSArray *originPaths;
@property (copy, nonatomic) NSArray *paths;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) id<AWEIMPinYinSearchProtocol> titlePinYinSearchObj;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property struct _NSRange { unsigned long long location; unsigned long long length; } matchRange;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *parentID;
@property (copy, nonatomic) NSString *sectionTitle;
@property (copy, nonatomic) NSString *routerURL;
@property (copy, nonatomic) NSString *pageRouterURL;
@property (retain, nonatomic) Class delegateClass;
@property (readonly, nonatomic) BOOL isRoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
