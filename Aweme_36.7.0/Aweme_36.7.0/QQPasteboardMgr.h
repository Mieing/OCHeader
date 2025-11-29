@class NSMutableArray;

@interface QQPasteboardMgr : NSObject {
    NSMutableArray *_boards;
}

+ (id)instance;

- (id)getObjectPasteboardByName:(id)a0;
- (id)getArrayPasteboardByName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
