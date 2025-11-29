@class AWECommentModel, NSArray, NSDictionary, NSString;

@interface AWECommentNewFeedCell : UITableViewCell <AWECommentCellProtocol, NSObject> {
    void /* unknown type, empty encoding */ viewmodel;
    void /* unknown type, empty encoding */ videoPublishProgressView;
    void /* unknown type, empty encoding */ debugTagView;
}

@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic, retain) AWECommentModel *commentModel;
@property (nonatomic, copy) id /* block */ likeButtonTappedBlock;
@property (nonatomic, copy) id /* block */ truncationTokenTappedBlock;
@property (nonatomic, copy) id /* block */ avatarOrNameTappedBlock;
@property (nonatomic, copy) NSDictionary *logExtraDict;
@property (nonatomic, copy) NSString *referString;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL isFromXigua;
@property (nonatomic) BOOL hiddenCommentContentAnimating;

+ (id)identifier;

- (void)resetLikesLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
