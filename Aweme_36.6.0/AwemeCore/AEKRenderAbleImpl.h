@class NSString;
@protocol AEKEditorConvertible;

@interface AEKRenderAbleImpl : NSObject <AEKRenderAble>

@property (weak, nonatomic) id<AEKEditorConvertible> convertor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)syncRefreshCurrentFrame:(double)a0;
- (id)asyncRefreshCurrentFrame;
- (id)asyncForceModeRefreshCurrentFrame;
- (id)initWithConvertor:(id)a0;
- (void).cxx_destruct;
- (id)render;
- (id)render:(id /* block */)a0;

@end
