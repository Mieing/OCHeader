@class NSMutableArray;

@interface WCFinderArbitraryPageScrollProcess : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long fromIdx;
@property (nonatomic) long long toIdx;
@property (nonatomic) double fromOffset;
@property (nonatomic) struct ConfigOffset { double graterThen; double point; } offset;
@property (nonatomic) long long otherPageIdx;
@property (nonatomic) BOOL needReloadAfterScroll;
@property (retain, nonatomic) NSMutableArray *pendingSwitchTab;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
