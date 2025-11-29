@class NSString, AWECommentModel, NSDictionary;

@interface AWECommentActionModel : NSObject

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWECommentModel *comment;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL isSubComment;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *attitudeType;
@property (nonatomic) BOOL attitudeWithDigg;

- (id)initWithComment:(id)a0 referString:(id)a1 enterFrom:(id)a2 previousPage:(id)a3 isSubComment:(BOOL)a4 actionType:(long long)a5 attitudeType:(id)a6 attitudeWithDigg:(BOOL)a7 extraParams:(id)a8 completion:(id /* block */)a9;
- (void).cxx_destruct;

@end
