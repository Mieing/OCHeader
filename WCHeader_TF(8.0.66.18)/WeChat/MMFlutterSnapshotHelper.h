@class NSMutableDictionary;

@interface MMFlutterSnapshotHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *callbackMap;
@property (retain, nonatomic) NSMutableDictionary *imageMap;
@property (retain, nonatomic) NSMutableDictionary *offsetMap;
@property (retain, nonatomic) NSMutableDictionary *showCallbackMap;

+ (id)instance;

- (id)init;
- (void)waitForTaskId:(int)a0 callback:(id /* block */)a1;
- (void)waitForShowTaskId:(int)a0 callback:(id /* block */)a1;
- (void)removeTaskId:(int)a0;
- (void)updateTask:(int)a0 image:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)updateTask:(int)a0 offset:(struct CGPoint { double x0; double x1; })a1 inScreen:(BOOL)a2;
- (id)getToOffsetForTask:(int)a0;
- (void)clearCache;
- (void).cxx_destruct;

@end
