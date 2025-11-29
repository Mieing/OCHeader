@class NSString, WCFinderFeedContentVM, WCFinderDataItem, WCFinderFeedMediaWrap;

@interface WCFinderMusicFeedVM : NSObject

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) long long style;
@property (readonly, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) long long status;
@property (nonatomic) long long viewerCount;
@property (nonatomic) long long likeCount;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long titleLineNumber;
@property (retain, nonatomic) NSString *timeString;
@property (retain, nonatomic) NSString *typeString;
@property (nonatomic) BOOL showMVIcon;
@property (nonatomic) long long cellAlignStyle;
@property (readonly, nonatomic) WCFinderFeedMediaWrap *coverMediaWrap;
@property (readonly, nonatomic) NSString *coverUrl;
@property (nonatomic) BOOL couldDelete;
@property (nonatomic) BOOL couldSlidDelete;
@property (nonatomic) BOOL couldRetry;
@property (nonatomic) BOOL isTransfering;
@property (nonatomic) BOOL showViwer;
@property (readonly, nonatomic) BOOL showProgress;
@property (readonly, nonatomic) double uploadProgress;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSString *observeKey;

+ (id)feedVMWithContentVM:(id)a0 style:(long long)a1;

- (id)init;
- (void)updateDataItem:(id)a0;
- (void)updateStatus;
- (void)updateDraftStatus;
- (void)updateMVStatus;
- (void)_updateCommonFields;
- (long long)compareTime:(id)a0;
- (id)formatTimeString:(double)a0;
- (id)accessibilityLabel;
- (long long)exposeDeleteElement;
- (id)exposeId;
- (id)description;
- (id)defaultIconWithSize:(struct CGSize { double x0; double x1; } *)a0;
- (void).cxx_destruct;

@end
