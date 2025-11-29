@class AWEPaySKMCheckCodeValidModel, NSError;

@interface AWEPayNFCRedirectPreReqModel : NSObject

@property (retain, nonatomic) AWEPaySKMCheckCodeValidModel *model;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isInPreRequestProgress;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
