@class UIColor;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVContext : NSObject

@property (retain, nonatomic) id<MMLiveUniqueTaskId> taskId;
@property (retain, nonatomic) UIColor *mainWidgetsColor;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultDatas;
- (void)updateMainWidgetsColor:(id)a0;
- (void).cxx_destruct;

@end
