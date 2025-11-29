@class NSString, NSArray, WCFinderRedDotTipsShowInfo, WCFinderRedDotCtrlInfo;

@interface WeChat.WSReddot : NSObject {
    void /* unknown type, empty encoding */ tipId;
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ $__lazy_storage_$_childNodes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leafNodes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_number;
    void /* unknown type, empty encoding */ byPassInfoData;
    void /* unknown type, empty encoding */ $__lazy_storage_$_byPassInfo;
}

@property (nonatomic, readonly) NSString *tipId;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ tabType;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, copy) NSArray *childNodes;
@property (nonatomic, copy) NSArray *leafNodes;
@property (nonatomic) long long number;
@property (nonatomic, copy) NSString *byPassInfo;
@property (nonatomic, readonly) WCFinderRedDotTipsShowInfo *showInfo;
@property (nonatomic, readonly) WCFinderRedDotCtrlInfo *ctrlInfo;
@property (nonatomic, readonly) BOOL showInDiscoverPage;
@property (nonatomic, readonly) NSString *description;

- (id)stringValue;
- (id)init;
- (void).cxx_destruct;

@end
