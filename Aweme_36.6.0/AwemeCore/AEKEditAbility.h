@class NSArray;
@protocol AEKMegaEditor, IESServiceProvider;

@interface AEKEditAbility : NSObject

@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (readonly, nonatomic) NSArray *megaEditorArray;

- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
