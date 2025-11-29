@class NSString, UIColor, UIFont;

@interface AWEIMSearchResultCellHeaderItemProtocolItem : NSObject <AWEIMSearchResultCellHeaderItemProtocol, AWEIMPrimaryKey>

@property (nonatomic) long long resultType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
