@class NSString, AWECommentJSBConfig, AWEAwemeModel, NSDictionary, NSNumber, AWEUserModel;

@interface AWECommentGeneralJSBModel : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *serviceID;
@property (retain, nonatomic) NSNumber *commentCountTotal;
@property (retain, nonatomic) AWEUserModel *author;
@property (retain, nonatomic) AWEAwemeModel *awemeInfo;
@property (retain, nonatomic) AWECommentJSBConfig *config;
@property (copy, nonatomic) NSDictionary *businessParams;

- (id)initWithItemID:(id)a0 serviceID:(id)a1;
- (void).cxx_destruct;

@end
