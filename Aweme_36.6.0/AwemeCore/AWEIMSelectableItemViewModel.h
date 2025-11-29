@class NSString, NSArray, NSDictionary, AWEURLModel;

@interface AWEIMSelectableItemViewModel : NSObject

@property (nonatomic) BOOL isSelected;
@property (readonly, nonatomic) AWEURLModel *avatarURL;
@property (readonly, copy, nonatomic) NSString *titleText;
@property (readonly, copy, nonatomic) NSString *subtitleText;
@property (readonly, copy, nonatomic) NSArray *tagViewModels;
@property (readonly, nonatomic) BOOL enableSelect;
@property (readonly, nonatomic) NSDictionary *businessInfo;

- (id)initWithAvatarURL:(id)a0 titleText:(id)a1 subtitleText:(id)a2 tagViewModels:(id)a3 isSelected:(BOOL)a4 enableSelect:(BOOL)a5 businessInfo:(id)a6;
- (void)updateIsSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
