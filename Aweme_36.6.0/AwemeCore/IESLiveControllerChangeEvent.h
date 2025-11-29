@class NSArray, IESLiveControllerVisibleModel;

@interface IESLiveControllerChangeEvent : NSObject

@property (readonly, nonatomic) IESLiveControllerVisibleModel *liveControllerModel;
@property (readonly, nonatomic) IESLiveControllerVisibleModel *previousLiveControllerModel;
@property (readonly, nonatomic) NSArray *pages;
@property (readonly, nonatomic) NSArray *previousPages;
@property (readonly, nonatomic) BOOL isLiveVisible;
@property (readonly, nonatomic) IESLiveControllerVisibleModel *topFullScreenPage;
@property (readonly, nonatomic) NSArray *fullScreenPages;
@property (readonly, nonatomic) BOOL previousVisible;
@property (readonly, nonatomic) IESLiveControllerVisibleModel *previousTopFullScreenPage;
@property (readonly, nonatomic) NSArray *previousFullScreenPages;
@property (readonly, nonatomic) NSArray *addedFullScreenPages;
@property (readonly, nonatomic) NSArray *removedFullScreenPages;

+ (id)eventWithLiveController:(id)a0 previousLiveController:(id)a1 pages:(id)a2 previousPages:(id)a3;

- (id)liveController;
- (BOOL)isLiveVisibleChanged;
- (BOOL)isLiveAppear;
- (BOOL)isLiveDisappear;
- (BOOL)hasFullScreenPageAdded;
- (BOOL)hasFullScreenPageRemoved;
- (id)initWithLiveController:(id)a0 previousLiveController:(id)a1 pages:(id)a2 previousPages:(id)a3;
- (id)calculatePageStatesWithPages:(id)a0 liveControllerModel:(id)a1;
- (id)calculateAddedFullScreenPagesFromPrevious:(id)a0 toCurrent:(id)a1;
- (id)calculateRemovedFullScreenPagesFromPrevious:(id)a0 toCurrent:(id)a1;
- (BOOL)isLivePageChanged;
- (BOOL)isTopFullScreenPageChanged;
- (BOOL)isPagesChanged;
- (id)changeTypesStr;
- (id)formatStringWithOldValue:(id)a0 newValue:(id)a1;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)description;
- (unsigned long long)changeType;
- (BOOL)hasAnyChange;

@end
