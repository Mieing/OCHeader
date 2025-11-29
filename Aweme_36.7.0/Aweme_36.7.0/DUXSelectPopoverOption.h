@class NSString, DUXPopoverUIConfigModel;
@protocol DUXSelectPopoverOptionSelectDelegate;

@interface DUXSelectPopoverOption : NSObject <IESIMSelectPopoverOptionProtocol>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) id /* block */ select;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DUXSelectPopoverOptionSelectDelegate> delegate;
@property (nonatomic) unsigned long long enlargeType;
@property (retain, nonatomic) DUXPopoverUIConfigModel *uiConfig;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) id /* block */ select;

+ (id)optionWithTitle:(id)a0 selectBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
