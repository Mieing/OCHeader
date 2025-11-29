@class NSString;
@protocol AWEHttpTask;

@interface AWESearchLongPressTagsManager : NSObject <AWESearchLongPressTagsProtocol>

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchResultTagInfo:(id)a0 image:(id)a1;
+ (void)trackShowLongPressPanelWithModel:(id)a0 enterFrom:(id)a1 isDual:(BOOL)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertStickerModelToRect:(id)a0;

- (void)fetchSearchLongPressTagsWithAwemeModel:(id)a0 image:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
