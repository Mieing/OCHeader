@class NSString;

@interface IESIMMarkViewService : HTSService <IESIMMarkViewService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createMarkViewButtonWithContainerViewBgColor:(id)a0 leftMargin:(id)a1 rightMargin:(id)a2 widthBetweenImageAndText:(id)a3 labelTextColor:(id)a4 labelTextFont:(id)a5;

@end
