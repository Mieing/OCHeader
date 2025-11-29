@class NSString, UIImage, NSURL;

@interface DUXActionPopoverAction : DUXActionPopoverBaseAction <IESIMActionPopoverActionProtocol, NSCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long use;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSURL *iconImageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ select;

+ (id)actionWithTitle:(id)a0 icon:(id)a1 use:(unsigned long long)a2 selectBlock:(id /* block */)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
