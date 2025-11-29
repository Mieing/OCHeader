@class AWEHotsoonRegularBarModel;

@interface AWERelationBottomBubbleView : AWEUINotificationBarView

@property (retain, nonatomic) AWEHotsoonRegularBarModel *model;
@property (nonatomic) unsigned long long scene;

+ (id)hotsoomImage;

- (void)showOnView:(id)a0 bottomOffset:(double)a1;
- (void)enterURL:(id)a0;
- (id)initWithModel:(id)a0 scene:(unsigned long long)a1 complete:(id /* block */)a2;
- (void)dismiss;
- (void).cxx_destruct;

@end
