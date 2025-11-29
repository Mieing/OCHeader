@class NSString;

@interface TingAddItemsToListNotify : NSObject <MMFlutterPlugin, TingAddItemsToListNotify>

@property (copy, nonatomic) id /* block */ completion;
@property BOOL notified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCompletion:(id /* block */)a0;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAddItemsSuccessWithError:(id *)a0;
- (void)onPickListSuccessAlbumData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
