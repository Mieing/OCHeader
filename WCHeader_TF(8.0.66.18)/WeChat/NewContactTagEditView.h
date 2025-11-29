@interface NewContactTagEditView : FavTagEditView {
    double m_textFieldMinWidth;
}

- (double)getTextFieldMinWidth;
- (id)getDefaultTitleFont;
- (double)getButtonHeight;
- (unsigned int)getMaxTagLength;

@end
