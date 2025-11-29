@class NSString, IESLLTempoNode;

@interface IESLLTempoStackModel : NSObject

@property (retain, nonatomic) IESLLTempoNode *curNode;
@property (retain, nonatomic) IESLLTempoNode *wipNode;
@property (retain, nonatomic) IESLLTempoNode *parentNode;
@property (copy, nonatomic) NSString *treeType;
@property (copy, nonatomic) NSString *componentID;

- (void).cxx_destruct;

@end
