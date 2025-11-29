@class NSString, WCFinderFeedArray;
@protocol WCFinderProfileFeedManagerDelegate;

@interface WCFinderProfileFeedManager : NSObject <WCFinderDataItemExt, WCFinderPostDataItemExt>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (weak, nonatomic) id<WCFinderProfileFeedManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithFeedArray:(id)a0 isAuthor:(BOOL)a1 username:(id)a2;

- (void)onFinderPostSessionUpLoadSuccessful:(id)a0;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)a0 errorType:(long long)a1;
- (void)onFinderPostSessionStartUpload:(id)a0;
- (BOOL)insertPostDataItem:(id)a0 tid:(id)a1;
- (void)onFinderDataItemDelete:(id)a0;
- (void).cxx_destruct;

@end
