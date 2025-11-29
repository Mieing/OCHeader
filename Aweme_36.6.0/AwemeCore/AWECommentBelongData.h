@class AWECommentModel, AWEAwemeModel;
@protocol AWECommentGeneralModelProtocol;

@interface AWECommentBelongData : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWECommentGeneralModelProtocol> generalModel;
@property (retain, nonatomic) AWECommentModel *commentModel;

- (void).cxx_destruct;

@end
