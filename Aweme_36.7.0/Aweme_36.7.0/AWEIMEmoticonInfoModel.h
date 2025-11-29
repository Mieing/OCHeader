@class NSString, AWEIMEmojiAuthor, NSURL, NSNumber;
@protocol AWEIMEmoticonInfoAnimateIconModelProtocol;

@interface AWEIMEmoticonInfoModel : IESIMEmoticonInfoModel <AWEIMEmoticonInfoModelProtocol>

@property (nonatomic) long long themeStyle;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSString *remoteURL;
@property (copy, nonatomic) NSString *descrip;
@property (retain, nonatomic) AWEIMEmojiAuthor *author;
@property (retain, nonatomic) id<AWEIMEmoticonInfoAnimateIconModelProtocol> animateIcon;
@property (nonatomic) BOOL userSelected;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSURL *displayIconURL;
@property (copy, nonatomic) NSString *uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
