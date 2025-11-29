@class NSSet;

@interface AWEIMChatCellHintTypeConfigModel : NSObject

@property (nonatomic) unsigned long long hintType;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) BOOL isCompatibleWithMention;
@property (nonatomic) BOOL isCompatibleWithTimeText;
@property (nonatomic) BOOL isCompatibleWithSnapshot;
@property (retain, nonatomic) NSSet *incompatibleMessageTabModes;

- (void).cxx_destruct;

@end
