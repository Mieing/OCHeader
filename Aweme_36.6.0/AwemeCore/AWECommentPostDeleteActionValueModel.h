@class NSString, NSArray, AWECommentModel;

@interface AWECommentPostDeleteActionValueModel : NSObject <AWECommentPostValueProtocol>

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *generalItemID;
@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSArray *commentIDsArray;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (nonatomic) long long totalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
