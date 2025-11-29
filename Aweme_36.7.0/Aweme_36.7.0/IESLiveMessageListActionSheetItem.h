@class NSString;

@interface IESLiveMessageListActionSheetItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ show;
@property (copy, nonatomic) id /* block */ gray;
@property (copy, nonatomic) id /* block */ click;
@property (copy, nonatomic) id /* block */ prepareDisplaySync;
@property (copy, nonatomic) id /* block */ onStartPrepareAsyncDisplay;
@property (nonatomic) unsigned long long itemType;

- (void).cxx_destruct;

@end
