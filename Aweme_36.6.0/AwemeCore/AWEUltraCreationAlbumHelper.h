@class CAKModalTransitionDelegate;

@interface AWEUltraCreationAlbumHelper : NSObject

@property (retain, nonatomic) CAKModalTransitionDelegate *albumTransitionDelegate;

+ (id)shareInstance;

- (void)showAlbumWithConfigInputData:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
