@class NSString, NSArray;

@interface AWEProfileExtensionAreaReminderIconConfig : NSObject <AWEProfileExtensionAreaReminderIconConfigProtocol>

@property (retain, nonatomic) NSString *dynamicText;
@property (retain, nonatomic) NSArray *imageURLArray;
@property (nonatomic) unsigned long long reminderIconType;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) unsigned long long iconStyle;
@property (nonatomic) BOOL needShowBorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
