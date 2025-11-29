@class NSString;

@interface PaintingContextProxy : NSObject <LynxShadowNodeDelegate> {
    void *painting_context_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishLayoutOperation;
- (BOOL)isLayoutFinish;
- (void)resetLayoutStatus;
- (id)initWithPaintingContext:(void *)a0;
- (void)updateExtraData:(long long)a0 value:(id)a1;
- (void)updateLayout:(long long)a0 layoutLeft:(double)a1 top:(double)a2 width:(double)a3 height:(double)a4;

@end
