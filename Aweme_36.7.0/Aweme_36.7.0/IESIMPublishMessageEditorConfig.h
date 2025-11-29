@class NSString, NSDictionary, NSArray;

@interface IESIMPublishMessageEditorConfig : NSObject

@property (copy, nonatomic) NSString *videoPath;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *shootEnterFrom;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) id /* block */ prepareEditCompletion;
@property (nonatomic) BOOL disableMusic;
@property (nonatomic) BOOL isRemote;
@property (copy, nonatomic) NSArray *hashTagList;

- (void).cxx_destruct;

@end
