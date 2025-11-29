@protocol AWECommentSectionViewModelBasicParamsProtocol;

@interface AWECommentSectionViewModelParams : NSObject

@property (readonly, nonatomic) id data;
@property (readonly, nonatomic) id<AWECommentSectionViewModelBasicParamsProtocol> basicParams;

- (void)updateData:(id)a0 basicParams:(id)a1;
- (void).cxx_destruct;

@end
